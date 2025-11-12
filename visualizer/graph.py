import pandas as pd
import matplotlib.pyplot as plt
import math

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

# --- Theoretical reference curves ---
#n_values = [i for i in range(100, 5001, 100)]
#c_nlogn = 1e-5
#c_n2 = 5e-6

#nlogn_curve = [c_nlogn * n * math.log2(n) for n in n_values]
#n2_curve = [c_n2 * (n ** 2) for n in n_values]

#plt.plot(n_values, nlogn_curve, 'k--', label=f"{c_nlogn}nlogn (reference)")
#plt.plot(n_values, n2_curve, 'r--', label=f"{c_n2}n² (reference)")

plt.title("Sorting Algorithm Comparison with Error Bars")
plt.xlabel("N (Number of Elements)")
plt.ylabel("Time (ms)")
plt.yscale("log")
plt.legend()
plt.grid(True, linestyle="--", alpha=0.6)
plt.tight_layout()
plt.savefig("graphs/filename")
plt.show()
