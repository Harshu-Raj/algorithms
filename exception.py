def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError as e:
        print(f"Error: {e}")
    else:
        print(f"The result is {result}")
    finally:
        print("Execution complete.")
divide(10, 2) 
divide(10, 0)