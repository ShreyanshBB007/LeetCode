class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        import pprint
        sdict = defaultdict(int)
        for s in cpdomains:
            rep, domain = s.split(" ", 1)
            sdict[domain] += int(rep)
            while domain:
                try:
                    _ , domain = domain.split(".", 1)
                    sdict[domain] += int(rep)
                except ValueError:
                    break

        ans = []
        for key in sdict:
            ans.append(f"{sdict[key]} {key}")
        return ans


            
