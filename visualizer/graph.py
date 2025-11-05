import pandas as pd
import matplotlib.pyplot as plt

files = {
    "Insertion Sort": "results/insertion_sort.csv",
    "Merge Sort": "results/merge_sort.csv",
    "Quick Sort": "results/quick_sort.csv"
}

for label, filename in files.items():
    df = pd.read_csv(filename, sep=';')
    yerr_lower = df["avg"] - df["min"]
    yerr_upper = df["max"] - df["avg"]
    plt.errorbar(df["N"], df["avg"], yerr=[yerr_lower, yerr_upper],
                 fmt='-o', capsize=4, elinewidth=1, label=label)

plt.title("Sorting Algorithm Comparison with Error Bars")
plt.xlabel("N (Number of Elements)")
plt.ylabel("Time (ms)")
plt.yscale("log")
plt.legend()
plt.grid(True, linestyle="--", alpha=0.6)
plt.tight_layout()
plt.show()
