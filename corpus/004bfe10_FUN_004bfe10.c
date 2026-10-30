
void FUN_004bfe10(void)

{
  if (DAT_00565080 == 0) {
    FUN_004c15cd(0xb);
    if (DAT_00565080 == 0) {
      FUN_004bfe3e();
      DAT_00565080 = DAT_00565080 + 1;
    }
    FUN_004c162e(0xb);
  }
  return;
}

