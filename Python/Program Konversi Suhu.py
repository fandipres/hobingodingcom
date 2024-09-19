print("Program Konversi Suhu")
print("visit us hobingoding.com")
print()
# Opsi Satuan Suhu
print("Suhu Awal")
print("1. Celcius")
print("2. Fahrenheit")
print("3. Kelvin")
print("4. Reaumur")

# Input Suhu
opsi = input("Pilih Suhu Awal : ")
suhu = int(input("Input Nilai Suhu : "))
print()

# Konversi Suhu
if opsi == "1":
    f = (9 / 5) * suhu + 32
    k = suhu + 273
    r = (4 / 5) * suhu
    print(f"Suhu {suhu} C :\n- F {f:.2f}\n- K {k:.2f}\n- R {r:.2f}")
elif opsi == "2":
    c = (5 / 9) * (suhu - 32)
    k = (5 / 9) * (suhu - 32) + 273
    r = (4 / 9) * (suhu - 32)
    print(f"Suhu {suhu} F :\n- C {c:.2f}\n- K {k:.2f}\n- R {r:.2f}")
elif opsi == "3":
    c = suhu - 273
    f = (9 / 5) * (suhu - 273) + 32
    r = (4 / 5) * (suhu - 273)
    print(f"Suhu {suhu} K :\n- C {c:.2f}\n- F {f:.2f}\n- R {r:.2f}")
elif opsi == "4":
    c = (5 / 4) * suhu
    f = (9 / 4) * suhu + 32
    k = (5 / 4) * suhu + 273
    print(f"Suhu {suhu} R :\n- C {c:.2f}\n- F {f:.2f}\n- K {k:.2f}")
else:
    print("Maaf : Opsi tidak tersedia")