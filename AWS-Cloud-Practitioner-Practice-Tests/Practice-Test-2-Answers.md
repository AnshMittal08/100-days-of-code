# AWS Certified Cloud Practitioner — Practice Test 2: Answer Key

| Q | Answer | Explanation |
|---|---|---|
| 1 | **B** — Increase speed and agility | Provisioning resources in minutes (instead of weeks for physical hardware) increases an organization's ability to experiment and innovate quickly. |
| 2 | **A** — Stop guessing capacity | Cloud elasticity lets you scale to actual demand instead of provisioning for a worst-case peak that may rarely occur. |
| 3 | **B** | Because AWS aggregates usage from a huge number of customers, it achieves higher economies of scale than any single company could alone, and passes savings on via lower pay-as-you-go prices. |
| 4 | **C** — Platform perspective | The Platform perspective covers principles and patterns for implementing new solutions on AWS and modernizing existing workloads (other perspectives: Business, People, Governance, Security, Operations). |
| 5 | **B** — Performance Efficiency | This pillar is about using computing resources efficiently and keeping up with evolving technology and requirements. |
| 6 | **B** — Sustainability | Added as the sixth pillar, it focuses on minimizing environmental impacts (energy, water, waste) of running cloud workloads. |
| 7 | **B** — Region selection | Because data does not leave a Region unless you explicitly configure it to (e.g., replication), choosing the right Region lets a company meet data residency/compliance requirements. |
| 8 | **B** | AZs are physically separated (distinct power, cooling, networking) so a failure — power outage, fire, flooding — in one AZ is isolated from the others, enabling high availability architectures. |
| 9 | **B** | Edge locations are CloudFront/Route 53 sites (far more numerous than Regions) used to cache content and resolve DNS closer to end users, reducing latency — they don't run EC2/RDS. |
| 10 | **A** — Total Cost of Ownership (TCO) | TCO compares the full cost of running infrastructure on-premises (hardware, facilities, power, staff) against running it in the cloud. |
| 11 | **B** | With SaaS, the provider (AWS) manages essentially everything — infrastructure, OS, and the application itself; the customer just configures/uses the application. |
| 12 | **A** | Rapid, self-service provisioning (minutes vs. weeks of procurement) is the definition of increased speed and agility. |
| 13 | **B** | For "abstracted"/managed services like S3 and DynamoDB, AWS operates the infrastructure, OS, and platform layer in addition to the physical layer; the customer is still responsible for managing their data, classifying assets, applying IAM/access policies, and (optionally) client-side encryption. |
| 14 | **C** — Inline policy | An inline policy is embedded directly in a single IAM user, group, or role and isn't reusable; managed policies (AWS or customer) are standalone objects that can be attached to multiple entities. |
| 15 | **A** — AWS IAM Access Analyzer | Access Analyzer uses logic-based reasoning to identify resources (like S3 buckets or IAM roles) shared with external principals, surfacing unintended access. |
| 16 | **B** — Amazon Cognito | Cognito provides user sign-up/sign-in and access control for web/mobile apps, including support for social/enterprise identity federation. |
| 17 | **A** — Amazon Macie | Macie uses machine learning and pattern matching to discover and classify sensitive data (like PII) in S3 and alert on inadvertent public exposure. |
| 18 | **A** — AWS Firewall Manager | Firewall Manager centrally configures and manages firewall rules (WAF, Shield Advanced, security groups) across accounts in an AWS Organization. |
| 19 | **B** — AWS CloudHSM | CloudHSM provides single-tenant, dedicated hardware security modules for customers who need direct control over keys or must meet strict compliance/regulatory standards (KMS is a managed, multi-tenant key service by comparison). |
| 20 | **B** — AWS Config | Config continuously records resource configuration changes and can evaluate them against rules to check for compliance drift. |
| 21 | **B** — AWS CloudTrail | CloudTrail logs API calls/account activity for governance, compliance, and auditing — "who did what, when, from where." |
| 22 | **A** — A cross-account IAM role with a trust policy | Cross-account roles let an external account assume a role (temporary credentials) with only the permissions you define, avoiding the need to create/share long-term IAM user credentials. |
| 23 | **A** — AWS Certificate Manager (ACM) | ACM provisions, manages, and renews free public SSL/TLS certificates for use with integrated services like CloudFront, ELB, and API Gateway. |
| 24 | **A, B** | Both server-side encryption (AWS manages/uses keys, e.g., via KMS) and client-side encryption (customer encrypts data before it's sent to AWS) are valid ways to protect data. The other options describe insecure practices, not encryption methods. |
| 25 | **B** — Service Control Policy (SCP) | SCPs, applied via AWS Organizations, set the maximum available permissions for accounts/OUs — they act as a guardrail that overrides even permissive IAM policies within the account. |
| 26 | **B** — AWS Fargate | Fargate is a serverless compute engine for containers (used with ECS or EKS) — no EC2 instances to provision, patch, or scale manually. |
| 27 | **B** — Amazon Lightsail | Lightsail bundles compute, storage, and networking into simple, predictable low-cost plans — ideal for simple workloads like blogs or small websites. |
| 28 | **B** — Dedicated Host | A Dedicated Host gives you an entire physical server dedicated to your use, useful for addressing licensing requirements (e.g., bring-your-own-license) tied to physical cores/sockets, or compliance needs. |
| 29 | **B** — NAT Gateway | A NAT Gateway lets resources in a private subnet initiate outbound connections to the internet while blocking unsolicited inbound traffic from reaching them directly. |
| 30 | **A** — VPC Peering | VPC Peering creates a direct network connection between two VPCs using private IP addresses, as if they were on the same network (non-transitive). |
| 31 | **B** — AWS Transit Gateway | Transit Gateway acts as a central hub that connects VPCs and on-premises networks, avoiding the complexity of many-to-many VPC peering connections. |
| 32 | **A** — S3 Versioning | Versioning keeps multiple versions of an object in a bucket, so accidental overwrites or deletions can be undone by restoring a prior version. |
| 33 | **A** — S3 Cross-Region Replication (CRR) | CRR automatically replicates objects to a bucket in a different Region, useful for compliance, disaster recovery, or reducing latency for geographically distributed users. |
| 34 | **B** — Multi-AZ deployment | Multi-AZ maintains a synchronous standby replica in another AZ purely for HA/failover — it's not used to serve read traffic during normal operation. |
| 35 | **B** — Read Replica | Read Replicas use asynchronous replication to create read-only copies that offload read traffic from the primary instance, improving read scalability. |
| 36 | **B** — DynamoDB Global Tables | Global Tables provide a fully managed, multi-Region, multi-active database, replicating data automatically so users worldwide get fast local reads/writes. |
| 37 | **B** — AWS Snowmobile | Snowmobile is a shipping-container-sized, truck-transported device used to migrate up to 100 PB of data — for exabyte-scale migrations, multiple Snowmobiles are used. Snowball/Snowball Edge are smaller, suitcase-sized devices. |
| 38 | **B** — Amazon CloudWatch | CloudWatch collects metrics/logs and can trigger alarms and automated actions (like Auto Scaling policies) based on thresholds. |
| 39 | **B** — AWS Systems Manager | Systems Manager gives a unified view for operational data and includes capabilities like Session Manager, Run Command, and Patch Manager to manage EC2 (and on-premises) instances at scale. |
| 40 | **B** — Amazon SQS | SQS is a fully managed message queuing service that decouples application components, letting them send/receive messages asynchronously and scale independently. |
| 41 | **B** — Amazon SNS | SNS is a pub/sub service that fans out a single published message to multiple subscriber types (email, SMS, SQS queues, Lambda functions, mobile push). |
| 42 | **A** — Amazon API Gateway | API Gateway is a fully managed service for creating, publishing, securing, and monitoring REST/HTTP/WebSocket APIs that front backend compute like Lambda. |
| 43 | **A** — AWS Step Functions | Step Functions lets you build visual workflows that coordinate multiple Lambda functions and AWS services with built-in error handling and state management. |
| 44 | **B** — Savings Plans | Savings Plans commit to a consistent $/hour spend for 1 or 3 years, automatically applying to any instance family/size/OS/Region usage (for Compute Savings Plans) — offering more flexibility than standard Reserved Instances, which are tied to a specific instance type/Region. |
| 45 | **A** — AWS Marketplace | AWS Marketplace is a digital catalog of third-party software (SaaS, AMIs, containers) that can be purchased and billed directly through your AWS account. |
| 46 | **B** — AWS Pricing Calculator | The Pricing Calculator lets you model and estimate the cost of AWS services for a proposed architecture before you deploy anything. |
| 47 | **A** — Cost allocation tags | Tagging resources with key-value pairs (e.g., `Project=Alpha`) allows those tags to be used to categorize and track costs in Cost Explorer and the Cost and Usage Report. |
| 48 | **C** — Business | The Business plan includes full Trusted Advisor best-practice checks and 24/7 access to Cloud Support Engineers via phone, chat, and email; Developer includes only core/limited checks and business-hours email support only. |
| 49 | **A** — AWS Cost and Usage Report (CUR) | The CUR is the most comprehensive and granular billing dataset AWS provides, including metadata like pricing, discounts, and usage attributes, deliverable to S3 for querying with Athena/Redshift/QuickSight. |
| 50 | **A** — AWS Budgets Actions | Budgets Actions let you configure automated responses (like applying an IAM policy or SCP, or notifying via SNS) when a budget threshold is exceeded or forecast to be exceeded. |

**Scoring:** Count your correct answers out of 50. 40+/50 (80%) indicates strong readiness.
