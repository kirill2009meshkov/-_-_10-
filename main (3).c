seconds = int(input("Введите количество секунд с момента старта:\n"))

hours = seconds // 3600
minutes = (seconds % 3600) // 60
secs = seconds % 60

print(f"Время с момента старта: {seconds} секунд.")
print(f"Форматированное время: {hours} ч {minutes} мин {secs} сек.")