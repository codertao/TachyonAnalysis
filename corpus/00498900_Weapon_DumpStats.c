
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* debug (flag 0x5a6730): write 'weapon_desc' with name, fire rate, shield/hull dmg, DPS,
   energy/ammo per weapon */

void Weapon_DumpStats(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  if ((DAT_005a6730 != 0) && (iVar2 = c_fopen(), iVar2 != 0)) {
    if (g_WeaponDefs[0].id != 0x26) {
      piVar4 = &g_WeaponDefs[0].refire;
      do {
        uVar3 = WeaponId_ToName();
        uVar3 = Rtxt_GetText(DAT_005a6140,piVar4[3],uVar3);
        c_fprintf(iVar2,s_Weapon___s___s__0055d5a0,uVar3);
        c_fprintf(iVar2,s_Fire_rate__Once_every__2_2f_seco_0055d578,
                  (double)((float)*piVar4 * _DAT_0052e6d0));
        c_fprintf(iVar2,s_Shield_damage___d_Hull_damage____0055d550,piVar4[-10] * piVar4[-0xb] >> 8,
                  piVar4[-9] * piVar4[-0xb] >> 8);
        c_fprintf(iVar2,s_Shield_DPS___d__Hull_DPS___d_0055d530,piVar4[-7],piVar4[-6]);
        if (piVar4[4] == 0) {
          uVar5 = CONCAT44(piVar4[6],s_Energy_Used___d_0055d51c);
        }
        else {
          uVar5 = CONCAT44(piVar4[4],s_Default_Ammo___d_0055d508);
        }
        c_fprintf(iVar2,uVar5);
        piVar1 = piVar4 + 0x34;
        piVar4 = piVar4 + 0x44;
      } while (*piVar1 != 0x26);
    }
    c_fclose(iVar2);
  }
  return;
}

