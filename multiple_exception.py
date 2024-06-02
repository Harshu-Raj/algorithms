def convert_to_int(value):
    try:
        result = int(value)
    except ValueError as e:
        print(f"ValueError: {e}")
    except TypeError as e:
        print(f"TypeError: {e}")
    else:
        print(f"The integer value is {result}")
    finally:
        print("Execution complete.")
convert_to_int("123") 
convert_to_int("abc") 
convert_to_int(None)