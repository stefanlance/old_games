coins = [1, 2, 5, 10, 20, 50, 100, 200]
coins_fake = [1, 2, 5]

# definitions

def loop():
	highest = 0
	total = 0
	
	# find highest coin value in list
	for i in coins_fake:
		if i > highest:
			highest = i
	
	# print(highest)
	
	for i in coins_fake:
		tracker = 0
		j = i
		while j+i <= highest:
			j += i
		print(tracker, "coins of", i, "make", j)
	
	print("total:", total)


def main():
	loop()
	
# program

main()
