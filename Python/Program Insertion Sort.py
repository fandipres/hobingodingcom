print("Pengurutan Data dengan Algoritma Insertion Sort")
print("visit us @hobingoding.com")
print()
#Input Banyak Data
banyakData = int(input("Input Banyak Data : "))
data = []
#Input Data
print("Data yang Belum Terurut :")
for i in range(banyakData):
    data.append(int(input()))
#Algoritma Insertion Sort
for i in range(banyakData):
    temp = data[i]
    j = i - 1
    while(j >= 0 and temp < data[j]):
        data[j+1] = data[j]
        j -= 1
    data[j + 1] = temp
#Output Data
print("Hasil Pengurutan Data :", data)
