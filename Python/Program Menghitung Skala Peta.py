print("Program Menentukan Skala Peta")
print("visit us hobingoding.com")
print()
# Input Opsi
print("Opsi Skala Peta : ")
print("1. Jarak Peta")
print("2. Jarak Sebenarnya")
print("3. Skala")
opsi = input("Input Opsi : ")

# Opsi Skala Peta
if(opsi == "1"):
    s = input("Input Skala : ")
    js = int(input("Input Jarak Sebenarnya (km) : "))
    jp = int(s.split(":")[0]) / int(s.split(":")[1]) * js
    print("Jarak Peta (cm) : %.f"%(jp * 100000))
elif(opsi == "2"):
    s = input("Input Skala : ")
    jp = int(input("Input Jarak Peta (cm) : "))
    js = jp / int(s.split(":")[0]) * int(s.split(":")[1])
    print("Jarak Sebenarnya (km) : %.f"%(js / 100000))
elif(opsi == "3"):
    jp = int(input("Input Jarak Peta (cm) : "))
    js = int(input("Input Jarak Sebenarnya (km) : "))
    s = (js * 100000) / jp
    print("Skala : %d : %d"%(1, s))
else:
    print("Maaf : Opsi tidak tersedia.")