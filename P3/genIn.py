import random

print(random.randint(10,50))
n = random.randint(3,20)
print(n)
tx = random.randint(20000,2000000)
ty = random.randint(20000,2000000)
print(tx,ty)
for i in range(0,n):
	print(random.randint(-2000,2000)+tx,random.randint(-2000,2000)+ty)
