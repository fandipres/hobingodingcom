print("Pengurutan Data dengan Algoritma Bubble Sort")
print("visit us hobingoding.com")
print()
data = []
# Input Banyak Data
banyak_data = int(input("Input Banyak Data : "))

# Input Data
print("Input Data :")
for i in range(0, banyak_data):
    data.append(int(input()))

# Algoritma Bubble Sort
for i in range(0, banyak_data):
    for j in range(0, banyak_data-i-1):
        if(data[j] > data[j+1]):
            tmp = data[j]
            data[j] = data[j+1]
            data[j+1] = tmp

# Hasil Pengurutan Data
print("Hasil Pengurutan Data :", data)
