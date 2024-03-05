func minimumLength(s string) int {
    var left int = 0
    var right int = len(s) - 1

    if right + 1 < 2 {
        return right + 1
    }

    for left < right && s[left] == s[right] {
        
        var curr = s[left]

        for left <= right && s[left] == curr {
            left++
        }
        for left <= right && s[right] == curr {
            right--
        }
    }
    return right - left + 1
}
