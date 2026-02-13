class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        from collections import defaultdict
        
        sdict = defaultdict(int)
        
        for s in cpdomains:
            rep, domain = s.split()
            rep = int(rep)
            
            parts = domain.split('.')
            for i in range(len(parts)):
                sub = '.'.join(parts[i:])
                sdict[sub] += rep
                
        return [f"{count} {dom}" for dom, count in sdict.items()]
