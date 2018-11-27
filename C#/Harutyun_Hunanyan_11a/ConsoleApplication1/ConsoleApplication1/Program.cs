using System;
using System.Collections.Generic;
using static System.Console;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Xndir 3

            //Barev Dzez. Xndrum pahanjvum e nermucel tiv/parkeri qanak yev artacel min qayleri qanaky, 
            //vor kpahanjvi parkeric m-dramner hanelov havasarecnel parkerum exac m-dramneri qanaky. 
            //Haskanali e, vor verjum bolor parkerum linelu e 1 m-dram. 
            WriteLine("Barev Dzez");
            skizb:;
            WriteLine("Xndrum em nermucel drakan amboxj tiv");
            int num = int.Parse( ReadLine());
            //Petq e vorqan hnaravor e shat m-dramner hanel mek qaylov, dra hamar parkery kareli e xmbavorel erkuakan xmberi` sksac verjic,
            //unenalov amen xmbum hnaravor shat metaxadramnerov parker. Amen qaylum hanelov xmberi mej gtvox aveli qich m-dramner parunakox
            //parki mj exac m-dramneric 1-ov pakas m-dramner(vorpeszi ayd parkum mna 1 m-dram) yev krknelov da amen xmbi het kstananq parker,
            //voroncum kan 1 kam 2 m-dram. Ayspisov arajin qaylum stananq xmberi qanaky`num/2

            int stp1 = num / 2;

            //Bayc kaxvac parkeri qanaki zuyg kam kent lineluc, zuygi depqum arajin xmbin(1 hamari parkic hashvac)
            //henc skzbic dzerq chenq ta, aysinqn 1 yev 2 m-dramnerov parker sarqelu qaylery klinen stp1-1 hat,
            //isk kenti depqum 1 hamarov parky xmbum klini miaky, isk 2 yev 3 parkery klinen mi xmbum.
            //Matematikoren asac kmna mek mnacord, vori hashvin xmberum 1 yev 2 m-dramnerov parker sarqelu hamar qaylery 1-ov kshatanan.
            //Yndhanur depqum stp2-um pahenq naxnakan qayleri qanaky, vor pahanjvum e 1 yev 2 m-dram parunakox parker sarqel,
            //aysinqn stp2=stp1 - 1 + num%2   

            int stp2 = stp1 - 1 + num % 2;

            //Ays qaylerov menq stacanq 1 yev 2 m-dramnerov parker, usti verjin qaylov khanenq mekakan m-dram 2 m-dramner parunakox parkeric
            //verjnakan res popoxakani mej pahenq qayleri yndhanur qanaky.

            int res = stp2 + 1; 

            WriteLine( "Minimal qayleri qanakn e\n" + res);

            //Xndri bazmaki qanaki krknman hamar gnanq skizb

            goto skizb;
        }
    }
}
