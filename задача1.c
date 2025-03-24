def calculate_trip_cost(demand_level, distance_km, duration_min):
    # Стоимость подачи
    base_fare = demand_level * 10
    # Стоимость за километр
    cost_per_km = 15 * distance_km
    # Стоимость за минуту
    cost_per_min = 5 * duration_min
    # Комиссия
    commission = 29 + (demand_level - 1) * (69 - 29) / 99
    
    # Итоговая стоимость
    total_cost = base_fare + cost_per_km + cost_per_min + commission
    return total_cost

# Пример использования
demand_level = 50
distance_km = 10
duration_min = 20
print(calculate_trip_cost(demand_level, distance_km, duration_min))
