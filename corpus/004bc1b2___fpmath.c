
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CRT: FP init (cfltcvt table, P5 FDIV test, default precision) */

void __fpmath(void)

{
  __cfltcvt_init();
  _DAT_00564f24 = __ms_p5_mp_test_fdiv();
  __setdefaultprecision();
  return;
}

