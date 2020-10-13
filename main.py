def err():
    print("Некоректний ввід")
try:
    a11 = float(input("Введіть перший коефіцієнт х:"))
except:
    err()
try:
    b12 = float(input("Введіть перший коефіцієнт y:"))
except:
    err()
try:
    a21 = float(input("Введіть другий коефіцієнт x:"))
except:
    err()
    exit()
try:
    b22 = float(input("Введіть другий коефіцієнт y:"))
except:
    err()
    exit()
try:
    c1 = float(input("Введіть перший коефіцієнт c:"))
except:
    err()
    exit()
try:
    c2 = float(input("Введіть другий коефіцієнт c:"))
except:
    err()
    exit()
detG = a11*b22 - b12*a21
det1 = c1*b22 - c2*b12
det2 = a11*c2 - a21*c1
x = round(det1/detG, 2)
y = round(det2/detG, 2)
print("x = " + str(x))
print("y = " + str(y))
