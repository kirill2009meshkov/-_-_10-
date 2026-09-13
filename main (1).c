import sys

data = sys.stdin.read().split()
a = int(data[0])
b = int(data[1])

print(f"Сумма: {a} + {b} = {a + b}")
print(f"Разность: {a} - {b} = {a - b}")
print(f"Произведение: {a} * {b} = {a * b}")
print(f"Деление: {a} / {b} = {a / b:.2f}")
print(f"Целочисленное деление: {a} // {b} = {a // b}")
print(f"Остаток от деления: {a} % {b} = {a % b}")
print(f"Возведение в степень: {a} ** {b} = {a ** b}")