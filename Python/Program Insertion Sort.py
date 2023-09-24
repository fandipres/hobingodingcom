print("Pengurutan Data dengan Algoritma Insertion Sort")
print("visit us hobingoding.com")
print()
data = []
# Input Banyak Data
banyak_data = int(input("Input Banyak Data : "))

# Input Data
print("Input Data :")
for i in range(banyak_data):
    data.append(int(input()))

# Algoritma Insertion Sort
for i in range(banyak_data):
    temp = data[i]
    j = i - 1
    while(j >= 0 and temp < data[j]):
        data[j+1] = data[j]
        j -= 1
    data[j + 1] = temp

# Hasil Pengurutan Data
print("Hasil Pengurutan Data :", data)
