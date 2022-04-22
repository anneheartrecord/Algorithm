package Double_Pointer

func twoSum(numbers []int, target int) []int {
	n := len(numbers)
	l := 0
	r := n - 1
	for l < r {
		if numbers[l]+numbers[r] == target {
			return []int{l + 1, r + 1}
		} else if numbers[l]+numbers[r] > target {
			r--
		} else {
			l++
		}
	}
	return []int{l + 1, r + 1}
}
