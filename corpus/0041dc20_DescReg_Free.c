
void DescReg_Free(int param_1)

{
  if ((&g_DescRegistry)[param_1] != 0) {
    OurFreeMem((&g_DescRegistry)[param_1]);
    (&g_DescRegistry)[param_1] = 0;
  }
  return;
}

