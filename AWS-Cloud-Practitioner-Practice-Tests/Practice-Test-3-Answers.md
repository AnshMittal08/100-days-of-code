# AWS Certified Cloud Practitioner — Practice Test 3: Answer Key

| Q | Answer | Explanation |
|---|---|---|
| 1 | **B** — AWS Outposts | Outposts delivers AWS-managed racks/servers directly to a customer's own facility, extending AWS infrastructure and APIs on-premises for low-latency local processing. |
| 2 | **A** — AWS Wavelength | Wavelength embeds AWS compute/storage at the edge of telecom 5G networks, minimizing latency for mobile/connected devices. |
| 3 | **B** — AWS Local Zone | Local Zones extend a parent Region to place select AWS services closer to large population/industry centers not already served by a Region, for single-digit-millisecond latency. |
| 4 | **B** — Rehost | Rehost ("lift and shift") moves applications with little to no changes. (Refactor = re-architect; Replatform = some optimization without changing core architecture; Retire = decommission.) |
| 5 | **B** — Repurchase | Repurchase means switching to a different product, typically moving to a SaaS platform (e.g., moving a CRM to Salesforce) instead of keeping the license model. |
| 6 | **A** — AWS Control Tower | Control Tower automates setup of a secure, multi-account landing zone using AWS Organizations, SCPs, and pre-configured guardrails/best practices. |
| 7 | **C** — Backup and restore | This is the lowest-cost, simplest DR strategy: back up data/configuration to another Region and only provision infrastructure there after a disaster occurs, resulting in the longest RTO. |
| 8 | **C** — Warm standby | Warm standby keeps a minimal but fully functional version of the environment always running in the DR Region, scaled up on failover — faster recovery than pilot light, cheaper than full multi-site. |
| 9 | **B** — AWS Well-Architected Tool | This free console tool walks you through Well-Architected Framework questions for a workload and produces a report of risks and recommendations. |
| 10 | **A** — AWS Application Discovery Service | This service collects usage and configuration data from on-premises servers to help plan migrations (often paired with Migration Hub for tracking). |
| 11 | **B** — Governance perspective | The Governance perspective focuses on skills/processes to align IT strategy with business strategy, manage risk, and maintain compliance. |
| 12 | **D** — Multi-site active/active | Running full production capacity concurrently across multiple Regions, with all sites actively serving traffic, is the multi-site active/active strategy — highest cost, fastest (near-zero) RTO/RPO. |
| 13 | **A** | An account-level password policy defines rules like minimum length, character requirements, expiration, and reuse prevention for IAM user passwords. |
| 14 | **B** | In AWS IAM policy evaluation, an explicit `Deny` in any applicable policy always overrides any `Allow`, regardless of how many policies grant access. |
| 15 | **A** — Conformance pack | A conformance pack is a collection of AWS Config rules and remediation actions that can be deployed as a single entity to check compliance with a framework (e.g., operational best practices, PCI DSS). |
| 16 | **B** — S3 Object Lock | Object Lock enforces WORM storage, blocking object version deletion or overwrite for a specified retention period or indefinitely (legal hold) — used for regulatory/compliance retention requirements. |
| 17 | **B** | AWS requires customers to follow its vulnerability/penetration testing policy — certain simulated events (e.g., DDoS-style tests) require prior authorization via AWS's request process, even against your own resources, to avoid disrupting shared infrastructure. |
| 18 | **A** — AWS Business Associate Addendum (BAA) | Customers handling HIPAA-regulated protected health information must review and accept the BAA, available through AWS Artifact, before using AWS for that workload. |
| 19 | **A** — Amazon Inspector | Inspector automatically scans EC2 instances and container images (in ECR) for known software vulnerabilities (CVEs) and unintended network exposure. |
| 20 | **A** — AWS Security Hub | Security Hub aggregates and prioritizes findings from GuardDuty, Inspector, Macie, and partner tools, and runs automated checks against security standards (like CIS benchmarks) in one dashboard. |
| 21 | **A** — Amazon Detective | Detective automatically collects log data (VPC Flow Logs, CloudTrail, GuardDuty findings) and builds a visual, interactive model to help analyze and get to the root cause of security findings. |
| 22 | **A** — AWS Backup | AWS Backup centralizes and automates backup policies across services like EBS, RDS, DynamoDB, EFS, and Storage Gateway from a single console. |
| 23 | **B** | Shield Advanced (a paid subscription) includes DDoS cost protection (credits for scaling charges incurred from an attack) and 24x7 access to the AWS DDoS Response Team — not included with the free Shield Standard tier. |
| 24 | **B** | A permissions boundary is an IAM feature that caps the maximum permissions a single user/role can have; an SCP is an AWS Organizations feature that caps maximum permissions for entire accounts/OUs. Neither can grant access on their own — both only limit. |
| 25 | **A** — A U2F security key or hardware MFA device | AWS supports virtual MFA apps, hardware MFA devices (like a physical token), and FIDO U2F security keys as authentication factors — hardware/U2F devices are considered a stronger option for protecting the root user. |
| 26 | **A** — AWS Batch | Batch dynamically provisions the optimal compute resources (instance types/quantity) based on the volume and requirements of submitted batch jobs, without requiring you to manage clusters. |
| 27 | **A** — Amazon ECR (Elastic Container Registry) | ECR is a fully managed Docker/OCI container image registry integrated with ECS, EKS, and IAM for access control. |
| 28 | **B** — Amazon EKS (Elastic Kubernetes Service) | EKS provides a managed Kubernetes control plane so customers can run standard Kubernetes workloads on AWS without operating their own control plane. |
| 29 | **B** — Application Load Balancer (ALB) | ALB operates at Layer 7 and supports content-based routing (path/host-based rules), ideal for HTTP/HTTPS microservices traffic. |
| 30 | **B** — Network Load Balancer (NLB) | NLB operates at Layer 4, handling millions of requests per second with ultra-low latency, and supports static/Elastic IP addresses per AZ. |
| 31 | **B** — Weighted routing | Weighted routing lets you assign relative weights to different resource records (e.g., 70/30 split), commonly used for A/B testing or gradual rollouts. |
| 32 | **B** — Latency-based routing | This policy uses latency measurements between users and AWS Regions to route requests to the Region that gives the fastest response. |
| 33 | **B** | CloudFront is a CDN that caches and serves content (static and dynamic) from edge locations. Global Accelerator improves performance/availability by routing traffic over AWS's private global network to the optimal endpoint, for a wider range of protocols (TCP/UDP), without caching content. |
| 34 | **A** — Elastic IP address | An Elastic IP is a static public IPv4 address you can allocate and quickly remap between instances, useful for masking instance failures. |
| 35 | **A** — Placement Groups | Placement groups influence how EC2 instances are placed on underlying hardware: Cluster (low latency, same rack), Spread (across distinct hardware to reduce simultaneous failures), or Partition (large distributed workloads like Hadoop). |
| 36 | **B** | An AMI is a template containing the software configuration (OS, application server, applications) required to launch an EC2 instance. |
| 37 | **B** | CloudWatch Logs stores and lets you search/query raw log event data (e.g., via Logs Insights); CloudWatch Metrics stores numerical time-series data points used to build dashboards and trigger alarms. |
| 38 | **A** — AWS X-Ray | X-Ray traces requests as they flow through distributed/microservices applications, helping identify performance bottlenecks and errors across service boundaries. |
| 39 | **C** — Tape Gateway | Tape Gateway presents a virtual tape library (VTL) interface compatible with existing backup software, letting organizations move away from physical tape while keeping familiar workflows. |
| 40 | **A** — AWS Database Migration Service (DMS) | DMS migrates databases to AWS with minimal downtime (using continuous replication for the cutover), supporting both same-engine (homogeneous) and different-engine (heterogeneous) migrations. |
| 41 | **B** — AWS Schema Conversion Tool (SCT) | SCT converts source database schema and code (stored procedures, views) to be compatible with a different target database engine; DMS is then used to migrate and replicate the actual data. |
| 42 | **B** | Outposts physically ships AWS hardware into the customer's own data center; Local Zones are AWS-operated facilities in additional metro locations that extend a Region but remain AWS-managed infrastructure, not on customer premises. |
| 43 | **A** — AWS Compute Optimizer | Compute Optimizer uses ML on historical CloudWatch utilization data to recommend optimal resource configurations (right-sizing) for EC2, Auto Scaling groups, EBS, and Lambda. |
| 44 | **A** | Standard RIs give the largest discount but can't change instance family (limited modifications like AZ/size within the same family); Convertible RIs offer a smaller discount but can be exchanged for a different instance family, OS, or tenancy during the term. |
| 45 | **A** | Enterprise Support includes a Concierge team (billing/account experts) in addition to a designated Technical Account Manager (TAM), providing broader proactive and operational support beyond a single point of contact. |
| 46 | **A** — AWS Cost Anomaly Detection | This service applies machine learning to your spending patterns to detect anomalies and send alerts, helping catch unexpected cost spikes early. |
| 47 | **B** — Always Free | Always Free offers apply indefinitely up to specified usage limits (e.g., Lambda's 1M free requests/month), unlike 12 Months Free offers which expire a year after account creation. |
| 48 | **A** — AWS re:Post | AWS re:Post is a free, community-driven Q&A service where customers get answers from AWS experts and other users; it replaced the AWS Forums. |
| 49 | **B** | The Basic Support plan does not include technical support cases; it only provides account/billing support, service health checks, and limited Trusted Advisor checks. Guaranteed response times require Business Support or higher. |
| 50 | **B** | Trusted Advisor's Service Limits (quota) checks alert you when usage of a resource is approaching its account service quota, so you can proactively request a limit increase before being blocked. |

**Scoring:** Count your correct answers out of 50. 40+/50 (80%) indicates strong readiness.
