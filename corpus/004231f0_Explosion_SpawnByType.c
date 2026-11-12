
/* sweep: 12-entry table at 0x535a68 */

void Explosion_SpawnByType
               (uint param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  if (0xb < param_1) {
    param_1 = 0xb;
  }
  if (param_4 == 0) {
    (*(code *)(&PTR_Impact_SparksOnModel_00535a68)[param_1 * 4])
              (param_3,*(undefined4 *)(&PTR_DAT_00535a6c)[param_1 * 4],
               *(undefined4 *)(&DAT_00535a70 + param_1 * 0x10),param_2,param_5);
    return;
  }
  (*(code *)(&PTR_Impact_SparksOnModel_00535a68)[param_1 * 4])
            (param_3,*(undefined4 *)(&PTR_DAT_00535a6c)[param_1 * 4],param_4,param_2,param_5);
  return;
}

