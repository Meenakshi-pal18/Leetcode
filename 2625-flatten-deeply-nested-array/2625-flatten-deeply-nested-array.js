/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, depth) {
    let ans = [];

    function flatten(arr, d) {
        for (let ele of arr) {
            if (Array.isArray(ele) && d > 0) {
                flatten(ele, d - 1);
            } else {
                ans.push(ele);
            }
        }
    }

    flatten(arr, depth);
    return ans;
};