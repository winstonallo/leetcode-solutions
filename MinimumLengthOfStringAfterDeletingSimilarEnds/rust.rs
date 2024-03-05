impl Solution 
{
    pub fn minimum_length(s: String) -> i32 
    {
        let bytes = s.as_bytes();
        let mut left = 0;
        let mut right = (s.len() - 1);

        if right + 1 < 2
        {
            return (right + 1) as i32;
        }

        while left < right && bytes[left].to_ascii_lowercase() == bytes[right].to_ascii_lowercase()
        {
            let c = bytes[left].to_ascii_lowercase();

            while left <= right && bytes[left].to_ascii_lowercase() == c
            {
                left += 1;
            }
            while left <= right && bytes[right].to_ascii_lowercase() == c
            {
                right -= 1;
            }
        }
        return (right - left + 1) as i32;
    }
}
