from Crypto.Cipher import AES
from Crypto import Random
from binascii import b2a_hex
import sys

# //get the plain text
plain_text = sys.argv[1]
# //the key length must be 16 (AES - 128) , 24(AES-192), or 32(AES-256) bytes

key = b'this is a 16 key'

# generate a non repeatable key vector with a length 
# equal to the size of the AES block

iv = Random.new().read(AES.block_size)

mycipher = AES.new(key, AES.MODE_CFB, iv)

ciphertext = iv + mycipher.encrypt(plain_text.encode())

mydecrypt = AES.new(key, AES.MODE_CFB, ciphertext[:16])

decrypttext = mydecrypt.decrypt(ciphertext[16:])

# output
file_out = open("encrypted.bin", "wb")
file_out.write(ciphertext[16:])
file_out.close()

print("the key k is: ", key)
print("iv is : " , b2a_hex(ciphertext)[:16])
print("the encoded data is: ", b2a_hex(ciphertext[16:]))
print("the decrypted data is: ", decrypttext.decode())
