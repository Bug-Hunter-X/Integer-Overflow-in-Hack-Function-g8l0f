function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  if (x > 0) {
    return bar(x);
  } else {
    return 0;
  }
}

function main(): void {
  echo baz(5);
}
