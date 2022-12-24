total = 0
with open("inputpe#13.txt",'r') as file:
    contents = file.readlines()


for i in contents:
    total += int(i)

print(str(total)[0:10])
