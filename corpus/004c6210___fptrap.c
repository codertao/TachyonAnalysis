
/* CRT: _amsg_exit(_RT_FLOAT); FP support not linked */

void __fptrap(void)

{
  __amsg_exit(2);
  return;
}

