
int FUN_004a6770(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_10 [4];
  byte local_c;
  char cStack_b;
  undefined2 uStack_a;
  int local_8;
  undefined4 local_4;
  
  puVar4 = &DAT_00564100;
  for (iVar5 = 0x1e4; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0xffff;
  *(undefined1 *)((int)puVar4 + 2) = 0xff;
  iVar5 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffffe;
  piVar2 = (int *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar2 = param_1;
    piVar2[2] = 0;
    piVar2[3] = piVar2[8];
    iVar1 = *(int *)(param_1 + 0x80);
    *(undefined1 *)(piVar2 + 5) = 0;
    piVar2[4] = piVar2[1] + iVar1;
    piVar2[6] = 0;
    piVar2 = piVar2 + 9;
  }
  iVar5 = FUN_004a69f0(param_1,local_10,param_2);
  while (iVar5 == 0) {
    if (local_c == 0xff) {
      if (cStack_b == 'Q') {
        if (local_8 != 3) {
          return 1;
        }
        FUN_004bd8e0(&DAT_00564100,local_4,3);
      }
    }
    else if ((local_c & 0xf0) == 0xb0) {
      (&DAT_00564113)
      [(CONCAT11(cStack_b,local_c) & 0xf) * 0x78 + (CONCAT21(uStack_a,cStack_b) & 0xff)] =
           (char)uStack_a;
    }
    else if ((local_c & 0xf0) == 0xc0) {
      *(char *)((int)&DAT_00564100 + (CONCAT11(cStack_b,local_c) & 0xf) + 3) = cStack_b;
    }
    iVar5 = FUN_004a69f0(param_1,local_10,param_2);
  }
  if (iVar5 == 0xc) {
    puVar4 = (undefined4 *)*param_3;
    param_3[2] = 0;
    if ((((char)DAT_00564100 != -1) || ((char)(DAT_00564100 >> 8) != -1)) ||
       (DAT_00564100._2_1_ != -1)) {
      if ((uint)param_3[1] < 0xc) {
        return 2;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = ((DAT_00564100 & 0xff | 0x100) << 8 | DAT_00564100 >> 8 & 0xff) << 8 |
                  DAT_00564100 >> 0x10 & 0xff;
      puVar4 = puVar4 + 3;
      param_3[2] = param_3[2] + 0xc;
    }
    uVar6 = 0;
    do {
      if (*(char *)((int)&DAT_00564100 + uVar6 + 3) != -1) {
        if ((uint)(param_3[1] - param_3[2]) < 0xc) {
          return 2;
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = (uint)*(byte *)((int)&DAT_00564100 + uVar6 + 3) << 8 | uVar6 | 0xc0;
        puVar4 = puVar4 + 3;
        param_3[2] = param_3[2] + 0xc;
      }
      iVar5 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      uVar7 = 0;
      puVar3 = puVar4;
      do {
        puVar4 = puVar3;
        if ((&DAT_00564113)[iVar5] != -1) {
          if ((uint)(param_3[1] - param_3[2]) < 0xc) {
            return 2;
          }
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar4 = puVar3 + 3;
          puVar3[2] = ((uint)(byte)(&DAT_00564113)[iVar5] << 8 | uVar7) << 8 | uVar6 | 0xb0;
          param_3[2] = param_3[2] + 0xc;
        }
        iVar5 = iVar5 + 1;
        uVar7 = uVar7 + 1;
        puVar3 = puVar4;
      } while (uVar7 < 0x78);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    iVar5 = *(int *)(param_1 + 0x98);
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)(param_1 + 200);
      do {
        *puVar4 = param_2;
        puVar4 = puVar4 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
  }
  return iVar5;
}

