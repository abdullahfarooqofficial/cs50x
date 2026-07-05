# taking input then find average
# list and loop
scores = []

for i in range(3):
    score = int(input("Num:"))
    scores.append(score)

average = sum(scores) / len(scores)
print(f"Average: {average}" )
