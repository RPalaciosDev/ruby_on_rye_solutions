def get_next_in_sequence(current: str) -> str:
    counts = {}
    for digit in current:
        counts[digit] = counts.get(digit, 0) + 1
        
    next_number = ""
    for digit, count in sorted(counts.items()):
        next_number += str(count) + digit
        
    return next_number

def main() -> None:
    current, target = map(str, input().split(" "))
    seen = set()
    
    for item_in_sequence in range(1, 101):
        if current == target:
            print(item_in_sequence)
            return
        if current in seen:
            print("Does not appear")
            return
        seen.add(current)
        current = get_next_in_sequence(current)
        
    print("I'm bored")
    
if __name__ == "__main__":
    main()