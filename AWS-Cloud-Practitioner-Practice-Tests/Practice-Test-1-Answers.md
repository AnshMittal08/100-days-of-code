# AWS Certified Cloud Practitioner — Practice Test 1: Answer Key

| Q | Answer | Explanation |
|---|---|---|
| 1 | **B** — Elasticity | Elasticity is the ability to automatically scale resources up or down to match demand. High availability/fault tolerance describe resilience, not scaling. |
| 2 | **A** — Trade capital expense for variable expense | Instead of investing in data centers/hardware (capex) before you know how you'll use them, you pay only for what you consume (opex). |
| 3 | **C** — Hybrid cloud | A hybrid deployment connects on-premises infrastructure with cloud resources, typically via VPN or Direct Connect. |
| 4 | **C** — Infrastructure as a Service (IaaS) | In IaaS (e.g., EC2), AWS manages hardware/virtualization/networking; the customer manages OS, middleware, and applications. |
| 5 | **B** — Amazon Chime | Chime is a ready-to-use communications application (SaaS). EC2, Lambda, and VPC are IaaS/compute building blocks, not end-user SaaS apps. |
| 6 | **C** — A Region consists of multiple, isolated Availability Zones | Each Region is a separate geographic area made up of two or more AZs, which are one or more discrete data centers with redundant power/networking. |
| 7 | **B** — Amazon CloudFront | CloudFront is AWS's CDN, caching content at edge locations close to users to reduce latency. |
| 8 | **C** — Operational Excellence | This pillar covers running and monitoring systems to deliver business value and continuously improving processes and procedures. |
| 9 | **C** — Six | Operational Excellence, Security, Reliability, Performance Efficiency, Cost Optimization, and Sustainability (added in 2021). |
| 10 | **B** — Business perspective | The CAF Business perspective focuses on ensuring IT aligns with business needs, building a business case, and value realization. (Other perspectives: People, Governance, Platform, Security, Operations.) |
| 11 | **B** — Go global in minutes | AWS's global infrastructure lets you deploy applications to multiple Regions worldwide within minutes, without building physical infrastructure. |
| 12 | **B** | Scalability = capacity can grow to meet demand (often planned); elasticity = capacity automatically expands/contracts in near real time as demand changes. |
| 13 | **C** — Configuration of security groups and IAM permissions | Customers are always responsible for "security in the cloud": data, IAM, OS/network/firewall configuration (for IaaS), and client-side encryption. |
| 14 | **C** | AWS's "security of the cloud" covers physical facilities, hardware, and the software that runs the underlying infrastructure. |
| 15 | **C** | Best practice: lock away root credentials, enable MFA on the root user, and create individual IAM users/roles with least-privilege permissions for daily work. |
| 16 | **B** — IAM role | Roles provide temporary security credentials that can be assumed by users, applications, or AWS services — no long-term keys required. |
| 17 | **B** — Multi-Factor Authentication (MFA) | MFA adds a second authentication factor (e.g., a virtual MFA app code) on top of the password. |
| 18 | **B** | Least privilege means granting only the minimum permissions needed to perform a task, reducing the blast radius of compromised credentials. |
| 19 | **B** | Security groups act as a stateful firewall at the instance/ENI level (return traffic automatically allowed); NACLs are stateless and operate at the subnet level (return traffic must be explicitly allowed). |
| 20 | **B** — AWS Key Management Service (KMS) | KMS creates and controls encryption keys used to encrypt data across many AWS services (S3, EBS, RDS, etc.). |
| 21 | **A** — AWS Artifact | Artifact is the self-service portal for on-demand access to AWS compliance reports (SOC, PCI-DSS, ISO, etc.) and to review/accept agreements. |
| 22 | **B** — AWS Shield | Shield (Standard, included free for all customers; Advanced, paid) protects against DDoS attacks. |
| 23 | **B** — Amazon GuardDuty | GuardDuty is a threat-detection service that continuously analyzes account/network/data activity using threat intel and ML. |
| 24 | **B** — AWS WAF | WAF is a web application firewall that filters/blocks common exploits like SQL injection and XSS at the application layer (Layer 7). |
| 25 | **A** — AWS Secrets Manager | Secrets Manager stores, encrypts, and can automatically rotate secrets like database credentials and API keys. |
| 26 | **A, B** | Organizations enables consolidated billing across member accounts and Service Control Policies (SCPs) to centrally restrict what actions accounts/OUs can perform. It does not do encryption, container orchestration, or DDoS monitoring. |
| 27 | **B** — AWS Lambda | Lambda is a serverless, event-driven compute service; you're billed based on requests and compute time, with no servers to manage. |
| 28 | **A** — AWS Auto Scaling | Auto Scaling monitors applications and automatically adjusts capacity (e.g., EC2 instance count) to maintain performance at the lowest possible cost. |
| 29 | **B** — Elastic Load Balancing (ELB) | ELB automatically distributes incoming traffic across multiple targets (EC2 instances, containers, IPs) in one or more AZs. |
| 30 | **C** — S3 Glacier Deep Archive | Deep Archive is the lowest-cost S3 storage class, designed for long-term retention/archival with retrieval times as long as 12 hours. |
| 31 | **C** — Amazon EBS | EBS provides persistent block storage volumes attached to a single EC2 instance at a time (within an AZ). |
| 32 | **B** — Amazon EFS | EFS is a fully managed, elastic NFS file system that can be mounted concurrently by many EC2 instances across AZs. |
| 33 | **A** — AWS Snowball | Snowball is a physical data transport device used for large-scale offline data migration when network transfer would be too slow or costly. |
| 34 | **B** — Amazon DynamoDB | DynamoDB is a fully managed, serverless NoSQL key-value/document database with single-digit-millisecond performance at scale. |
| 35 | **B** — Amazon Aurora | Aurora is AWS's MySQL- and PostgreSQL-compatible relational database, offering up to 5x MySQL throughput (and up to 3x PostgreSQL). |
| 36 | **B** — Amazon Redshift | Redshift is a fully managed data warehouse optimized for large-scale analytical (OLAP) queries across massive datasets. |
| 37 | **A** — Amazon ElastiCache | ElastiCache provides managed in-memory caching (Redis/Memcached) to speed up application/database reads. |
| 38 | **B** — Amazon VPC | VPC lets you provision a logically isolated virtual network with full control over IP ranges, subnets, route tables, and gateways. |
| 39 | **B** — Amazon Route 53 | Route 53 is AWS's scalable DNS and domain registration service, also supporting health checks and routing policies. |
| 40 | **B** — AWS Direct Connect | Direct Connect establishes a dedicated, private network connection from on-premises to AWS, bypassing the public internet for more consistent bandwidth/latency. |
| 41 | **B** — AWS CloudFormation | CloudFormation is AWS's Infrastructure as Code service — define resources in JSON/YAML templates and provision them as a "stack." |
| 42 | **A** — AWS Elastic Beanstalk | Elastic Beanstalk automatically handles provisioning of EC2, load balancing, Auto Scaling, and health monitoring, letting developers just upload code. |
| 43 | **C** — Spot Instances | Spot Instances offer up to ~90% discount versus On-Demand by using unused EC2 capacity, but AWS can reclaim them with a two-minute interruption notice. |
| 44 | **C** — Reserved Instances | For steady-state, predictable workloads over a 1- or 3-year term, Reserved Instances (or Savings Plans) offer significant discounts over On-Demand. |
| 45 | **B** — 12 Months Free | The 12 Months Free tier gives a specified quantity of usage free for a year from account creation (e.g., 750 hrs/month of t2.micro EC2). "Always Free" has no time limit; "Trials" are short free trials starting at first use. |
| 46 | **B** — AWS Cost Explorer | Cost Explorer provides visualizations, reports, and forecasts to analyze AWS cost and usage patterns over time. |
| 47 | **B** — AWS Budgets | Budgets lets you set custom cost/usage/RI-utilization thresholds and sends alerts (e.g., via SNS/email) when they're exceeded or forecast to be exceeded. |
| 48 | **A** — AWS Organizations consolidated billing | Consolidated billing combines usage across all accounts in an organization into a single payer account, often unlocking volume pricing/discounts. |
| 49 | **D** — Enterprise | The Enterprise plan includes a designated Technical Account Manager (TAM) and a 15-minute target response time for business-critical system down. (Business support offers <1 hr response for production system down, no dedicated TAM.) |
| 50 | **A** — AWS Trusted Advisor | Trusted Advisor inspects your environment and gives real-time recommendations across cost optimization, performance, security, fault tolerance, and service limits. |

**Scoring:** Count your correct answers out of 50. 40+/50 (80%) indicates strong readiness.
