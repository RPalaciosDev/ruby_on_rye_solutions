import copy

def get_difference(end_counts: dict, start_counts: dict) -> dict:
    differences = {'A': None, 'T': None, 'G': None, 'C': None}
    for nucleotide, count in end_counts.items():
        differences[nucleotide] = count - start_counts[nucleotide]
    return differences

def print_differences(difference_counts: dict) -> None:
    precedence = {'A': 0, 'T': 1, 'G': 2, 'C': 3}
    
    print(''.join(sorted(difference_counts, key=lambda k: (-difference_counts[k], precedence[k]))))

def main() -> None:
    counts_at_index = {'A': 0, 'T': 0, 'G': 0, 'C': 0}
    counts = [copy.deepcopy(counts_at_index)]
    
    sequence = input()
    for nucleotide in sequence:
        counts_at_index[nucleotide] += 1
        counts.append(copy.deepcopy(counts_at_index))
        
    queries = int(input().strip())
    for _ in range(queries):
        start, end = map(int, input().strip().split(' '))
        start_counts = counts[start - 1]
        end_counts = counts[end]
        difference_counts = get_difference(end_counts, start_counts)
        print_differences(difference_counts)
        
if __name__ == "__main__":
    main()