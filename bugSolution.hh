function foo(x: int64): int64 {
  return x + 1;
}

function bar(x: int64): int64 {
  return foo(x) + 1;
}

function baz(x: int64): int64 {
  if (x > 0) {
    return bar(x);
  } else {
    return 0;
  }
}

function main(): void {
  echo baz(-9223372036854775807);
}
