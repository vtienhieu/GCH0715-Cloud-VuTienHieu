var fun = {
  sumN: function sumN(n) {
    let s = 0;
    for (i = 1; i <= n; i++) {
      s = s + i;
    }
    return s;
  },

  gtN: function gtN(n) {
    let s = 1;
    for (i = 1; i <= n; i++) {
      s = s * i;
    }
    return s;
  },
};
module.exports = fun;
