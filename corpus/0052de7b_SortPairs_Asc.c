
/* same array, smallest key first (nearest-first lists built by 0x45f3f0) */

void __cdecl SortPairs_Asc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  do {
    iVar3 = iVar3 * 3 + 1;
  } while (iVar3 < DAT_0062c0e8);
  do {
    iVar3 = iVar3 / 3;
    iVar5 = iVar3;
    do {
      uVar1 = (&DAT_006240e8)[iVar5 * 2];
      iVar2 = (&DAT_006240ec)[iVar5 * 2];
      iVar4 = iVar5;
      do {
        iVar6 = iVar4 - iVar3;
        if ((int)(&DAT_006240ec)[iVar6 * 2] <= iVar2) break;
        (&DAT_006240e8)[iVar4 * 2] = (&DAT_006240e8)[iVar6 * 2];
        (&DAT_006240ec)[iVar4 * 2] = (&DAT_006240ec)[iVar6 * 2];
        iVar4 = iVar6;
      } while (iVar3 <= iVar6);
      (&DAT_006240e8)[iVar4 * 2] = uVar1;
      (&DAT_006240ec)[iVar4 * 2] = iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_0062c0e8);
    if (iVar3 < 2) {
      return;
    }
  } while( true );
}

