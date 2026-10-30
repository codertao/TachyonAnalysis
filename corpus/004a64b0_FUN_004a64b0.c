
uint FUN_004a64b0(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  byte local_c;
  char cStack_b;
  undefined2 uStack_a;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined2 uStack_6;
  byte *local_4;
  
  param_2[2] = 0;
  if ((*(int *)(param_1 + 0xb4) == 0) || (uVar4 = FUN_004a6690(param_1,0,param_2), uVar4 == 0)) {
    puVar6 = (undefined4 *)(*param_2 + param_2[2]);
    if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
      return 0xb;
    }
    while (0xf < (uint)(param_2[1] - param_2[2])) {
      iVar5 = FUN_004a69f0(param_1,&local_10,param_3);
      if (iVar5 != 0) {
        if (iVar5 == 0xc) {
          *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 1;
        }
        break;
      }
      if (local_c < 0xf0) {
        *puVar6 = local_10;
        puVar6[1] = 0;
        puVar6[2] = ((CONCAT12(local_8,uStack_a) & 0xff) << 8 | CONCAT21(uStack_a,cStack_b) & 0xff)
                    << 8 | CONCAT11(cStack_b,local_c) & 0xff;
        puVar6 = puVar6 + 3;
        param_2[2] = param_2[2] + 0xc;
      }
      else if (local_c == 0xff) {
        if ((cStack_b != '/') && (cStack_b == 'Q')) {
          if (CONCAT22(uStack_6,CONCAT11(uStack_7,local_8)) != 3) {
            return 1;
          }
          bVar1 = *local_4;
          bVar2 = local_4[1];
          bVar3 = local_4[2];
          *puVar6 = local_10;
          puVar6[1] = 0;
          puVar6[2] = ((bVar1 | 0x100) << 8 | (uint)bVar2) << 8 | (uint)bVar3;
          puVar6 = puVar6 + 3;
          param_2[2] = param_2[2] + 0xc;
        }
      }
      else {
        iVar5 = CONCAT22(uStack_6,CONCAT11(uStack_7,local_8));
        *(byte **)(param_1 + 0xbc) = local_4;
        uVar4 = *(uint *)(param_1 + 0xa0) & 0xfffffffd;
        *(int *)(param_1 + 0xb8) = iVar5;
        *(uint *)(param_1 + 0xa0) = uVar4;
        if (local_c == 0xf0) {
          *(uint *)(param_1 + 0xa0) = uVar4 | 2;
          *(int *)(param_1 + 0xb8) = iVar5 + 1;
LAB_004a662a:
          *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
        }
        else if (local_c == 0xf7) goto LAB_004a662a;
        uVar4 = FUN_004a6690(param_1,local_10,param_2);
        if (uVar4 != 0) {
          return uVar4;
        }
        puVar6 = (undefined4 *)(*param_2 + param_2[2]);
      }
    }
    uVar4 = -(uint)((*(uint *)(param_1 + 0xa0) & 1) != 0) & 0xb;
  }
  return uVar4;
}

