
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CRT: Pentium FDIV bug test */

undefined4 __ms_p5_test_fdiv(void)

{
  if (_DAT_0052eaf8 < _DAT_0052f0e8 - (_DAT_0052f0e8 / _DAT_0052f0f0) * _DAT_0052f0f0) {
    return 1;
  }
  return 0;
}

