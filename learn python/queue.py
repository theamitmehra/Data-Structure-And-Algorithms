import queue


queue = []

queue.append('a')
queue.append('b')
queue.append('c')

print('initial queue')
print(queue)

print("\nelements dequeued from queue")
print(queue.pop(0))
print(queue.pop(0))
print(queue.pop(0))

print('\nQueue after removing elements')
print(queue)