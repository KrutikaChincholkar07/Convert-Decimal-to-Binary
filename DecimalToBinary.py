num = int(input("Enter a decimal number: "))

binary = ""
temp = num

if temp == 0:
    binary = "0"
else:
    while temp > 0:
        binary = str(temp % 2) + binary
        temp //= 2

print("Binary:", binary)
