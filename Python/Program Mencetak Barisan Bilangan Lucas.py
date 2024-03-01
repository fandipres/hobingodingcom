print("Program Mencetak Barisan Bilangan Lucas")
print("visit us hobingoding.com")
print()
def lucas(x):
    if(x == 0):
        return(2)
    if(x == 1):
        return(1)
    else:
        return lucas(x-1) + lucas(x-2)

total = 0
# Input Panjang Barisan
panjang_barisan = int(input("Input Panjang Barisan : "))

# Barisan Bilangan Lucas
print("Barisan Bilangan Lucas :", end=" ")
for i in range(panjang_barisan + 1):
    print(lucas(i), end=" ")
    total += lucas(i)
print("\nTotal :", total)