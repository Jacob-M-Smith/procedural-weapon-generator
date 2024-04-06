#ifndef WEPGEN_H
#define WEPGEN_H

/*typedef struct gun
{
    uint level;
    wparts parts;    
    enum type gun_type;
    wstats stats;
} gun;

typedef struct wparts
{
    uint material;
    uint barrel;
    uint grip;
    uint body;
    uint sight;
    uint stock;
    enum bonus_part bp;
} wparts;

typedef struct wstats
{
    uint damage;
    uint magsize;
    float reload;
    float firerate;
    float accuracy;
    uint elem_damage;
    uint elem_pool;
} wstats;

/*
This enum contains each available weapon type.
Base stats are derived from weapon type.
Each type should feel unique and fulfil a niche.
Not sure about launchers.
*/

/*enum type
{
    PISTOL,
    REPEATER,
    H_REVOLVER,
    S_REVOLVER,
    ASSUALT_RIFLE,
    MACHINE_GUN,
    SUB_MACHINE_GUN,
    MARKSMAN_RIFLE,
    LEVER_RIFLE,
    SNIPER,
    PUMP_SHOTGUN,
    SEMI_SHOTGUN,
    AUTO_SHOTGUN,
    BREACH_SHOTGUN,
};

/*
This enum conatins each of the special rare bonus parts.
Each provides a boost to one of the weapon stats.
Shiny guns.
*/
/*enum bonus_part
{
    FMJ,                      // damage
    EXPLOSIVE_ROUNDS,         // elemental (unlimited pool)
    EXTENDED_MAGS,            // bigger mags
    FAST_MAGS,                // faster reload
    COMPENSATOR,              // better accuracy
    ENHANCED_CHAMBER          // improved fire rate
    };*/



// prototypes
int      rpng(int, int);

#endif
