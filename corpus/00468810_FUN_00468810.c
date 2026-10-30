
void FUN_00468810(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = FUN_0048e350();
  uVar2 = FUN_0048e350();
  uVar2 = uVar2 % 0x9b + 100 >> (bVar1 & 7);
  if (uVar2 < 0x5a) {
    uVar2 = 0x5a;
  }
  uVar3 = FUN_0048e350();
  bVar1 = FUN_0048e350();
  uVar3 = ((uVar3 & 0x1f) >> (bVar1 & 1)) + 8 + uVar2;
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  *param_1 = (uVar2 << 8 | uVar2) << 8 | uVar3;
  *param_2 = ((uVar2 & 0xfffffffe) << 8 | uVar2 & 0xfffffffe) << 7 | uVar3 >> 1;
  return;
}

