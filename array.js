let a = [1, 2, 3, 4, 5];
function pairvalue(a) {
  //   for (let i = 0; i < a.length; ++i)
  //     for (let j = 0; j < a.length; ++j) console.log(a[i], a[j]);
  a.forEach(function (i) {
    {
      a.forEach(function (j) {
        console.log(i, j);
      });
    }
  });
}
pairvalue(a);
