
undefined * FUN_00492c90(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  bool bVar6;
  
  ppuVar5 = &PTR_s_GALSPAN_LIGHT_LASER_0055a3c0;
  pbVar4 = PTR_s_GALSPAN_LIGHT_LASER_0055a3c0;
  do {
    pbVar2 = param_1;
    if (pbVar4 == (byte *)0x0) {
      return (undefined *)0x0;
    }
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00492cd1:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00492cd6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00492cd1;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00492cd6:
    if (iVar3 == 0) {
      return ppuVar5[1];
    }
    pbVar4 = ppuVar5[2];
    ppuVar5 = ppuVar5 + 2;
  } while( true );
}

