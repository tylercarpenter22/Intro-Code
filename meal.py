#Meal Time CS50 Problem Set 1

def main():
    time = input("What time is it? ")
    if convert(time) >= float(7.00) and convert(time) <= float(8.00):
        print("breakfast time")
    elif convert(time) >= float(12.00) and convert(time) <= float(13.00):
        print("lunch time")
    elif convert(time) >= float(18.00) and convert(time) <= float(19.00):
        print("dinner time")
    else:
        print("not time to eat")

def convert(time):
    hour, mins = time.split(":")
    float_mins = float(mins) / 60
    float_hour = float(hour)
    time = float_hour + float_mins
    return float(time)

if __name__ == "__main__":
    main()
