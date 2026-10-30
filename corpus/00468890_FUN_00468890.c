
void FUN_00468890(float *param_1)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  uVar1 = FUN_0048e350();
  uVar2 = FUN_0048e350();
  FUN_0052db6a(local_18,uVar1 & 0xffffff,uVar2 & 0x1ffffff,0);
  FUN_0052dbcd(local_18);
  FUN_0052dccb(&DAT_0054a6a0,&local_24);
  FUN_0052dc22(&local_24,&local_24);
  FUN_00468790(&local_24,0x20000000);
  *param_1 = (float)local_24;
  param_1[1] = (float)local_20;
  param_1[2] = (float)local_1c;
  FUN_00468810(param_1 + 5,param_1 + 6);
  uVar1 = FUN_0048e350();
  param_1[8] = (float)(uVar1 & 3);
  do {
    uVar1 = FUN_0048e350();
  } while ((uVar1 & 0x3fff) < 0x2400);
  param_1[7] = (float)(uVar1 & 0x3fff);
  return;
}

