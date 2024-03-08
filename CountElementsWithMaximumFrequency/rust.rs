impl Solution 
{
    pub fn max_frequency_elements(nums: Vec<i32>) -> i32 
    {
        let mut freq: i32 = 0;
        let mut max_freq: i32 = 0;
        let mut map = vec![0; 101];

        for num in nums.iter()
        {
            map[*num as usize] += 1;
            freq += (map[*num as usize] == max_freq) as i32;
            if (map[*num as usize] > max_freq)
            {
                freq = 1;
                max_freq = map[*num as usize]
            }
        }
        return freq * max_freq;
    }
}
