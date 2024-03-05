/**
 * @param {string} s
 * @return {number}
 */
var minimumLength = function(s) 
{
    var left = 0;
    var right = s.length - 1;

    if (right + 1 < 2)
        return right + 1;
    
    while (left < right && s[left] == s[right])
    {
        var curr = s[left];

        while (left <= right && s[left] == curr)
            left++;
        while (left <= right && s[right] == curr)
            right--;
    }
    return right - left + 1;
};
