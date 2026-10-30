
/* .des object factory: read DESC_TYPE from CBIN, switch->typed ctor (ship/proj/station/...) */

undefined4
Desc_CreateByType(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_40 [64];
  
  *param_2 = 0;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)FUN_0041dbb0(param_1,0);
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = Cbin_Open(param_1);
      if (iVar2 == 0) {
        return 1;
      }
      Cbin_GetParam(&DAT_00532af4,s_DESC_TYPE_00535214,local_40,0x3f,0,4,1);
      Cbin_Close();
      uVar3 = Desc_ResolveTypeName(local_40);
    }
    else {
      uVar3 = *puVar1;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
    }
    switch(uVar3) {
    case 1:
      uVar3 = Ent_CreateShip(param_1,param_6,param_3,param_5);
      *param_2 = uVar3;
      return 0;
    case 2:
      uVar3 = Ent_CreateAsteroid(param_1,param_6);
      *param_2 = uVar3;
      return 0;
    case 3:
      uVar3 = Ent_CreateCapitalShip(param_1,param_6);
      *param_2 = uVar3;
      return 0;
    case 4:
      uVar3 = Ent_CreateHyperGate(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 5:
      uVar3 = Ent_CreateStarbase(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 6:
      uVar3 = Ent_CreateMine(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 7:
      uVar3 = Ent_CreateCargo(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 8:
      uVar3 = Ent_CreateBeacon(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 9:
      uVar3 = Ent_CreateSpeedRing(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 10:
      uVar3 = Ent_CreateType0a(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 0xb:
      uVar3 = Ent_CreateCourse(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 0xc:
      uVar3 = Ent_CreateMiscObject(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    case 0xd:
      uVar3 = Ent_CreatePowerup(param_1,param_6,param_5);
      *param_2 = uVar3;
      return 0;
    default:
      *param_2 = 0;
      return 2;
    }
  }
  return 4;
}

